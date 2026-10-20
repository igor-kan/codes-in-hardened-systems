"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 820."""

def spec_graphene_hardened_malloc_820() -> dict:
    return {"system": "GrapheneOS", "spec_id": 820, "quarantine_slabs": 5, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_820():
    s = spec_graphene_hardened_malloc_820()
    assert s["spec_id"] == 820
