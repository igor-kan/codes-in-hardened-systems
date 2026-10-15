"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 334."""

def spec_graphene_hardened_malloc_334() -> dict:
    return {"system": "GrapheneOS", "spec_id": 334, "quarantine_slabs": 15, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_334():
    s = spec_graphene_hardened_malloc_334()
    assert s["spec_id"] == 334
