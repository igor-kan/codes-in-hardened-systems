"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 340."""

def spec_graphene_hardened_malloc_340() -> dict:
    return {"system": "GrapheneOS", "spec_id": 340, "quarantine_slabs": 5, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_340():
    s = spec_graphene_hardened_malloc_340()
    assert s["spec_id"] == 340
